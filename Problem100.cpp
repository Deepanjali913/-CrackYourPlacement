p.push_back(arr[j]);
                  v[j]=true;
                  permutation(i+1 , n , arr , p , ans , v);
                  v[j]=false ;
                  p.pop_back(arr[j]);