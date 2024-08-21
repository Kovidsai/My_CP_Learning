// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long sx, sy, tx, ty;
//     cin>>sx>>sy>>tx>>ty;
//     // if sx > tx --> move left
//     // if sx < tx --> move right
//     // if sy > ty --> move down 
//     // if sy < ty --> move up

//     // if abs(sy-ty) >= abs(sx-tx) then no horizontal cost
//     // vertical cost cannot be reduced

//     long long k;
//     long long g=0;
    
//     if(abs(sy-ty)>=abs(sx-tx))
//     {
//         k = abs(sy-ty);
//     }
//     else
//     {
        
//         k = abs(sy-ty) + (abs( abs(sy-ty)- abs(sx-tx)))/2;

//         if( (sx-tx)>0 && sy==ty && ((sy%2==0 && sx%2==0)||(sy%2!=0 && sx%2!=0)))
//             k=k+1;
//         if( (sx-tx)<0 && sy==ty && ((sy%2!=0 && sx%2==0)||(sy%2==0 && sx%2!=0)))
//             k=k+1;

//     }

//     cout<<k;


//     return 0;
// }
