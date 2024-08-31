const handleLogin = async () => {
    const userIdInput = document.getElementById("user_id");
    const passwordInput = document.getElementById("password");

    const user_id = userIdInput.value;
    const password = passwordInput.value;

    const user = {
        userId: user_id,
        password: password,
    };

    const userInfo = await fetchUserInfo(user);
    console.log(userInfo); 
    const errorElement = document.getElementById("user_login_error");

    //user data did not match with database
    if (userInfo.length === 0) {
        errorElement.classList.remove("hidden");
    } else {
        errorElement.classList.add("hidden");

        //save user information before jumping to the nextr page
        localStorage.setItem("loggedInUser", JSON.stringify(userInfo[0]));
        window.location.href = "/post.html";
    }
};

const fetchUserInfo = async(user) => {
    try{
        const res = await fetch("http://localhost:5000/getUserInfo", {
            method: "POST",
            headers: {
                "content-type": "application/json",
            },
            body: JSON.stringify(user),
        });

        data = await res.json();
    } catch (err) {
        console.log("Error connecting to the server: ", err);
    } finally {
       return data;
    }    
};