//Fires the bullet if in streak
if(currentStreak < bulletStreak){
    shootBullet(xout,yout);
    currentStreak++;
    alarm[2]=2;
}                

