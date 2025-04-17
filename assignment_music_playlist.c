#include<stdio.h>
#define size 3
int playlist[size];
int rear =-1 ,front=-1;
int i;

struct songs{
	int id ;
	char name[20];
	char artist[20];
	};
struct songs s[5];	

void Enqueue(int element){
	if(rear==-1 && front==-1){
		rear=front=0;
		playlist[rear]=element;
	}
	else if((rear+1)%size == front){
		printf("Playlist  is full\n");
	}
	else{
		rear=(rear+1)%size;
		playlist[rear]=element;
	}
}
void Dequeue(){
	if(rear==-1 && front==-1){
		printf("Playlist  is empty\n");
	}
	else if(rear==front){
		printf("song with id %d deleted\n",playlist[front]);
		rear=-1;
		front=-1;
	}
	else{
		printf("%d deleted\n",playlist[front]);
		front=(front+1)%size;
	}
}
void play(){
	int t;
	printf("Enter the no of times :");
	scanf("%d",&t);
	if(front==-1 && rear ==-1){
		printf("playlist is empty\n");
	}
	else{	 
		printf("Let's Go\n");
		for(int j=0;j<t;j++){
			i=front;
			while(1){
				printf("track :%d\n",playlist[i]);
				printf("song : %s\n",s[i].name);
				printf("Artist : %s\n",s[i].artist);
				printf("\n");
				if(i==rear){
				break;
				}	
				i=(i+1)%size;
			
			}	
			printf("-------------------------------------------\n");
		}
	}
}
int main(){
int value;
int choice;
int track=0;
printf("WELCOME TO MUSIC PLAYLIST\n");
// menu driven program
while(1){
	printf("\n1.add songs \n2.Delete songs \n3.play the songs \n4.Exit\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		printf("Enter the track id :");
		scanf("%d",&s[track].id);
		printf("Enter the name of the song:");
		scanf("%s",&s[track].name);
		printf("Enter the artist:");
		scanf("%s",&s[track].artist);
		
		Enqueue(s[track].id);
		track+=1;
		break;
		
		case 2:
		Dequeue();
		break;
		
		case 3:
		play();
		break;
		
		case 4:
		return 0;
		break;
		
		default:
		printf("Invalid choice\n");
		}
	}
	return 0;
}												

