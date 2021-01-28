//программа определяет во сколько раз велична целой части больше чем дробной
int main() {
int NOD;
int a =126, b = 426;
  while(a != b) 
  {
     if (a > b) {
 a = a-b;
 NOD = a;
}
   else {
 b = b - a;
 NOD = b;
   }
 }
	return 0;
}
