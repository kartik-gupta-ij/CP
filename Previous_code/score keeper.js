const ad1top1 = document.querySelector("#ad1top1")
const ad1top2 = document.querySelector("#ad1top2")
const player1 = document.querySelector("#player1")
const player2 = document.querySelector("#player2")
const reset = document.querySelector("#reset")


const winningScore = document.querySelector("#playingto")
let playingto = 9
let p1scroce = 0
let p2scroce = 0
let isGameOver = false;

ad1top1.addEventListener('click', function () {
    if (!isGameOver) {
        p1scroce += 1;
        if (playingto === p1scroce) {
            isGameOver = true;
            player1.classList.add('winner')
            player2.classList.add('loser')
        }
        player1.textContent = p1scroce;
    }
})

ad1top2.addEventListener('click', function () {
    if (!isGameOver) {
        p2scroce += 1;
        if (playingto === p2scroce) {
            isGameOver = true;
            player2.classList.add('winner')
            player1.classList.add('loser')
        }
        player2.textContent = p2scroce;
    }
})

reset.addEventListener("click", resetf)


winningScore.addEventListener("change", function () {
    playingto = parseInt(this.value);
    resetf();
})



function resetf() {
    p1scroce = 0
    p2scroce = 0
    isGameOver = false;
    player2.textContent = p2scroce;
    player1.textContent = p1scroce;
    player2.classList.remove('winner', "loser")
    player1.classList.remove('winner', "loser")

}