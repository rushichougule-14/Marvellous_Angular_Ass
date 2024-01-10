import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class StringCountService {

  constructor() { }
  
    StringCount(str:string):any
    {
      let count = 0 ;
      
      for(let char of str)
      {
        if(char >= 'A' && char <='Z')
        {
          count++;
        }
      }
  
      return count;
  
    }
  }

