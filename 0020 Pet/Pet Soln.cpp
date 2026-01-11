using namespace std ;

main () 
{
  int num ;
  int max = 0 ;
  int a, b, c , d ;
  for (int i = 0 ; i <= 5 ; i++)
  {
    cin >> a >> b >> c >> d ; 
    if (a+b+c+d > max)
    {
      max = a+b+c+d ;
      num = i + 1 ;
    }
  }
  cout << num << " " << max ; 
}
