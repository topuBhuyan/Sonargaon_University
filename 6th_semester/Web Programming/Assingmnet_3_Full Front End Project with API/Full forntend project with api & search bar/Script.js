// https://openapi.programmig-hero.com/api/phones?search=samsung
function handalSearch(){
    loadingAnimationTogol(true);
    const searchInputElament = document.getElementById("search_input_filed");
    const searchInputValue = searchInputElament.value;

    loadPhone(searchInputValue);
}

function loadingAnimationTogol(isLoading) {
    const loaderAnimation = document.getElementById("loderAnimation");
    if(isLoading){
        loaderAnimation.classList.remove("hidden");
    }
    else{
        loaderAnimation.classList.add("hidden");
    }
}

const loadPhone = async(searchText) => {
    //console.log("Insite the load phone function: ",searchText);
    const res = await fetch(
        ` https://openapi.programming-hero.com/api/phones?search=${searchText} `);
    
    console.log("Server Response: ", res);

    const Serverdata = await res.json();

    displayPhone(Serverdata.data);
}

const displayPhone = (data) =>{
    const cardContainer = document.getElementById("Card_Section");
    console.log("server data", data)

    cardContainer.innerHTML = "";
    data.forEach(phone => {
       // console.log(phone.phone_name);
       const prodectCard = document.createElement("div");
       prodectCard.classList.add("card");

        prodectCard.innerHTML= 
        `
        <div class="card_img">
                <img src=${phone.image} alt="phone img">
            </div>
            <div>
                <h3 class="cardTitle">${phone.phone_name}</h3>
                <p class="cardDecraption">There are many variations of passages of available, but the majority have suffered</p>
            </div>
            <div class="card_prize">
                <span>$</span>
                <span id="card_item_Prize">999</span>
            </div>
            <div class="card_btn">
                <button class="btn">Show Details</button>
            </div>
        `;
        
        cardContainer.appendChild(prodectCard);
       //console.log(prodectCard);
    });
    loadingAnimationTogol(false);
};