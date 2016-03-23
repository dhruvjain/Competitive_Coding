  #include<bits/stdc++.h>

  using namespace std;
  //4,2
  long long countmergedinv(int a[],int l,int mid,int h){


       int i=l;
       int j=mid+1;   
       int b[h-l+1];
       int k=0;
       long long count=0;
       while(i<=mid && j<=h){
            if(a[i]<=a[j]){
            	 b[k]=a[i];
            	 i++;
            	 k++;
            	 continue;}

            if(a[i]>a[j]){
               count+=mid-i+1;
               b[k]=a[j];
               j++;
               k++;
            }

       }

       while(i<=mid){

       	  b[k]=a[i];
       	  i++;
       	  k++;
       }
      while(j<=h){
      
           b[k]=a[j];
           j++;
           k++;
      }
      int size=k;
      i=0;
      k=l;
      while(i<size){
         a[k]=b[i];
         k++; 
         i++;
      }

      return count;
  }
  long long countinversions(int a[],int l,int h){

     int c1=0,c2=0,c3=0;
     if(l<h){


       int mid=(l+h)/2;
       c1=countinversions(a,l,mid);
       c2=countinversions(a,mid+1,h);
       c3=countmergedinv(a,l,mid,h);
       return c1+c2+c3;
     }
     return 0;
     
  }

  int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
        cin>>arr[i];
      cout<<countinversions(arr,0,n-1)<<endl;
    }


  }