const express = require("express");
const mysql = require("mysql");
const cors = require("cors");

const port = 5000;

const app = express();

// middlewqares

app.use(cors());
app.use(express.json());

// making conection with MySQL server

let db = mysql.createConnection({
    host : 'localhost',
    user : 'root',
    password: '',
    database: 'postbook',
    port: 3306,
});

db.connect((err) => {
    if(err) {
        console.log("somthing went wrong while connection on port: ", err);
        throw err;
    }else {
        console.log("MySQL server connected...");
    }
});



//getting user data from server

app.post("/getUserInfo", (req, res) => {
    
    const {userId, password } = req.body;

    const getUserInfosql = `SELECT user_id, User_Name, User_Img FROM users WHERE users.user_id = ? AND users.User_Pasword = ? `;

    let query = db.query(getUserInfosql, [userId, password], (err, result) => {
        if(err) {
            console.log("Error gettng user info form server: ", err);
            throw err;
        } else {
            res.send(result);
        }
    } );
});

app.get("/getAllposts", (req, res) => {
    const sqlForAllposts = `SELECT users.User_Name AS postedUserName, users.User_Img AS postedImage, posts.postId, posts.postedTime, posts.postText, posts.postImgUrl FROM posts INNER JOIN users ON posts.postedUserId=users.user_id ORDER BY posts.postedTime DESC `;

    let query = db.query(sqlForAllposts, (err, result) => {
        if(err){
            console.log("Error loading all posts form database: ", err);
            throw err;
        }
        else {
            console.log(result);
            res.send(result);
        }
    })
});

//! getting update of post

// const express = require('express');
// const bodyParser = require('body-parser');
// const db = require('./db');


// app.use(bodyParser.json());
// app.use(express.static('public'));

// Get all records
// app.get('/api/records', (req, res) => {
//   db.query('SELECT * FROM records', (err, results) => {
//     if (err) throw err;
//     res.json(results);
//   });
// });

// // Add a new record
// app.post('/api/records', (req, res) => {
//   const { name, description } = req.body;
//   db.query('INSERT INTO records (name, description) VALUES (?, ?)', [name, description], (err, results) => {
//     if (err) throw err;
//     res.json({ id: results.insertId, name, description });
//   });
// });

// // Edit a record
// app.put('/api/records/:id', (req, res) => {
//   const { id } = req.params;
//   const { name, description } = req.body;
//   db.query('UPDATE records SET name = ?, description = ? WHERE id = ?', [name, description, id], (err) => {
//     if (err) throw err;
//     res.sendStatus(200);
//   });
// });

// // Delete a record
// app.delete('/api/records/:id', (req, res) => {
//   const { id } = req.params;
//   db.query('DELETE FROM records WHERE id = ?', [id], (err) => {
//     if (err) throw err;
//     res.sendStatus(200);
//   });
// });

//! getting update of post End

//getting comments of a single post

app.get("/getAllComments/:postId", (req, res) => {
    let id = req.params.postId;

    let sqlForAllComments = `
    SELECT users.User_Name AS commentedUserName, users.User_Img AS commentedUserImage, comments.commentId, comments.commentOfPostId, comments.commentText, comments.commentTime
FROM comments
INNER JOIN users ON comments.commentedUserId=users.user_id WHERE comments.commentOfPostId =${id} `;

let query = db.query(sqlForAllComments, (err, result) => {
    if(err) {
        console.log("Error fethcing from the server: ", err);
        throw err;
    } else {
        res.send(result);
    }
  });
});

// adding new comments to a post
app.post("/postComment", (req, res) => {
 //  const {commentsOfPostId, commentedUserId, commentText, commentTime} = res.body;

    const { commentsOfPostId,  commentedUserId,  commentText, commentTime } = req.body;

     let sqlForAddingNewComments = ` INSERT INTO comments ( commentId, commentOfPostId, commentedUserId, commentText, commentTime ) VALUES (NULL, ?, ?, ?, ?); ` ; 

    let query = db.query(sqlForAddingNewComments, [commentsOfPostId, commentedUserId, commentText, commentTime],
    (err, result) => {
        if(err) {
            console.log("Error adding comment to the database: ", err);
            throw err;
        } else {
            res.send(result);
        }
    }
);
});

app.post("/addNewpost", (req, res) => {
    //destrcture teh req.body object

    const {postedUserId, postedTime, postText, postImgUrl} = req.body;

    //sql query

    let sqlAddingNewPost = `INSERT INTO posts (postId, postedUserId, postedTime, postText, postImgUrl) VALUES (NULL, ?, ?, ?, ?)`;

    let query = db.query(sqlAddingNewPost, [postedUserId, postedTime, postText, postImgUrl], (err, result) => {
        if(err) {
            console.log("Error while adding a new in the database: ", err);
            throw err;
        }else {
            res.send(result);
        }
    });
});

app.listen(port, () => {
    console.log(`Server is runing on port ${port}`);
});


