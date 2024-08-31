
const showLoggedUsername = () => {
    const userNameElement = document.getElementById("logged_username");

    // find username from local storage

    let user = localStorage.getItem("loggedInUser");
    if(user){
        user = JSON.parse(user);
    }

    //show username in the webpage
    userNameElement.innerText = user.User_Name;
};

const checkLoggedInUser = () => {
    let user = localStorage.getItem("loggedInUser");
    if(user) {
        user = JSON.parse(user);
    } else {
        window.location.href = "./index.html";
    }
};

const logOut = () => {
    //clearing the localstorege
    localStorage.clear();
    checkLoggedInUser();
};


const fetchAllPosts = async () => {
    let data;

    try {
        const res = await fetch ("http://localhost:5000/getAllPosts");
            data = await res.json();
            console.log(data);
            showAllPosts(data);
    }catch(err) {
        console.log("Error fetching data form server: ");
    }
};

const showAllPosts = (allPosts) => {
    const postContainer = document.getElementById("post_container");
    postContainer.innerHTML = "";

    allPosts.forEach(async (post) => {
        const postDiv = document.createElement("div");
        postDiv.classList.add("post");

        postDiv.innerHTML = `
        <div class="post_header">
                <div class="post_user_img">
                    <img src=${post.postedImage}
                     />
                </div>

                <div class="post_username_time">
                    <p class="post_username">${post.postedUserName}</p>
                    <div class="posted_time">
                        <span>${timeDifference(`${post.postedTime}`)}</span>
                        <span>ago</span>
                    </div>
                </div>
            </div>

            <div class="post_text">
                <p class="post_text_content">${post.postText}</p>
            </div>

            <div class="post_img">
                <img src=${post.postImgUrl} 
                />
            </div>
        `
        postContainer.appendChild(postDiv);

        // comments under a post

        let postComments = await fetchAllCommentsOfAllPost(post.postId);
        console.log("postComments: ", postComments);

        postComments.forEach((comment) => {
            const commentHolderDiv = document.createElement("div");
            commentHolderDiv.classList.add("comments_holder");

            commentHolderDiv.innerHTML = `
             <div class="comment">
                    <div class="comment_user_img">
                        <img src=${comment.commentedUserImage}
                        />
                    </div>
                    
                    <div class="comment_text_container">
                        <h4>${comment.commentedUserName}</h4>
                        <p class="comments_text">
                           ${comment.commentText}
                        </p>
                    </div>
                </div>

            `;
            postDiv.appendChild(commentHolderDiv);
    });

    // adding a new comment to the post

    const addNewCommentiDiv = document.createElement("div");
    addNewCommentiDiv.classList.add("postComment_holder");

    addNewCommentiDiv.innerHTML = `
    <div class="postComment_holder">
                <div class="post_comment_input_field_holder">
                    <input type="text"
                    placeholder="post your Comment"
                    class="post_comment_input_field"
                    id="postComment_input_for_postId_${post.postId}"
                    />
                </div>
               <div class="comment_btn_holder">
                <button onClick=handlePostComment(${post.postId}) class="Post_comment_button" id="comment_btn">Comment</button>
               </div>
    `;

    postDiv.appendChild(addNewCommentiDiv);
});
};

    //! Update and delete

const handlePostComment = async (postId) => {
   // collecting loagged in user ID from localstorage

   //getting user id
   let user = localStorage.getItem("loggedInUser");
    if(user) {
        user = JSON.parse(user);
    }
    const commentedUserId	= user.user_id;

    // getting comment text from input

    const commentTextElement = document.getElementById( `postComment_input_for_postId_${postId}` );

    const commentText = commentTextElement.value;
    
    // curent time of the comment

    let now = new Date();

    now.setMinutes(now.getMinutes() - now.getTimezoneOffset());

    let timeOfComment = now.toISOString();

    const commentObject = {
        commentsOfPostId: postId,
        commentedUserId: commentedUserId,
        commentText: commentText,
        commentTime: timeOfComment,
    };
        console.log("commetn", commentObject);
    try{
        const res = await fetch ("http://localhost:5000/postComment", {
            method: "POST",
            headers: {
                "content-type": "application/json",
            },
            body: JSON.stringify(commentObject),
        });

        const data = await res.json();
    }
    catch(err) {
        console.log("Err while sending data to the server", err);
    } finally {
        location.reload();  
    }
};

const fetchAllCommentsOfAllPost = async (postId) => {
    let commentsOfPost = [];
    try{
        const res = await fetch(`http://localhost:5000/getAllComments/${postId}`);
        commentsOfPost = await res.json();
    }
    catch(err){
        console.log("Error fetching comments from the sercer: ", err);
    } finally {
        return commentsOfPost;
    }
};

//! update server create


/// added_post_container section

const handleAddNewPost = async() => {
    //getting user id
    let user = localStorage.getItem("loggedInUser");
    if(user) {
        user = JSON.parse(user);
    }
    const postedUserId	= user.user_id;

     // curent time of the post

     let now = new Date();

     now.setMinutes(now.getMinutes() - now.getTimezoneOffset());
     
     let timeOfPost = now.toISOString();

     // post text

     const postTextElement = document.getElementById("newPost_text");
     const postText = postTextElement.value;

     // post image

     const postImageElement = document.getElementById("newPost_img");
     const postImgUrl = postImageElement.value;

     // reating a post object

     const postObject = {
        postedUserId:postedUserId,
        postedTime: timeOfPost,
        postText: postText,
        postImgUrl: postImgUrl,
     };

     try{
        const res = await fetch ("http://localhost:5000/addNewpost", {
            method: "POST",
            headers: {
                "content-type": "application/json",
            },
            body: JSON.stringify(postObject),
        });

        const data = await res.json();
    }
    catch(err) {
        console.log("Err while sending data to the server", err);
    } finally {
        location.reload();  
    }
 };

fetchAllPosts();
showLoggedUsername();