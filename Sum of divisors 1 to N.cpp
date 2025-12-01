long long n;
cin >> n;
long long ans=0;
for( long long i=1,j; i * i <= n; i++ ) {
  j = n / i;
  ans += ( i + j ) * ( j - i + 1 ) / 2;
  ans += i * ( j - i );
}
cout << ans << "\n";
