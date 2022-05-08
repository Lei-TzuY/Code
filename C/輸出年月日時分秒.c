int main(){
	int  s, M, h;
	printf("Enter date and time(second:Minute:hour): ");
	scanf("%d:%d:%d",&h,&M,&s);
	
	if(h == 00){h = 12;
	printf("AM %2d:%2d:%2d,",&h,&M,&s);}
	else {
	if(h<=12 && h!= 00){
	printf("AM %2d:%2d:%2d,",&h,&M,&s);}
	else {
	if(h==12){
    printf("PM %2d:%2d:%2d,",&h,&M,&s);}
	else {
	if(h>=12);{ h= h-12;
    printf("PM %2d:%2d:%2d,",&h,&M,&s);}
}}}}