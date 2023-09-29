// Write a program to find out the max number from given array using function 
void maxnumber(){
    int i,arr[]={50,60,7,9,100},max;
    max=arr[i];
    for(i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
       
    }
     printf("max number is %d",max);
}
void main(){
    maxnumber();
}
