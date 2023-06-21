struct position{
	int top;
	int left;
};
	
int get_area(struct position p1, struct position p2){
	int width = p2.left - p1.left;
	int height = p2.top - p1.top;
	int area = width * height;
	
	return area;
	
}
	
main() {

	struct position dot1, dot2;
	dot1.top = 10;
	dot1.left = 30;
	
	dot2.top = 50;
	dot2.left = 80;
	
	printf("Top = %d, Left = %d \n", dot1.top, dot1.left);
	printf("Top = %d, Left = %d \n", dot2.top, dot2.left);
	printf("area: %d", get_area(dot1, dot2));
}
