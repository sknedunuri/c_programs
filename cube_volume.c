// wacp to find the volume os a cube
// formule = side*side*side;
#include<stdio.h>
void main()
{
	unsigned int side, vol;
	printf("Please enter the side of a cube:\n");
	scanf("%u",&side);
	vol = side * side * side;
	printf("volume of a cube is %u",vol);
}
