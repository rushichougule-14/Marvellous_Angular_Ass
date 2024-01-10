import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class NumberService {

  constructor() { }
  ChkPrime(ino:number) : any
  {
    if(ino <=1)
    {
      return false;
    }

    for(let i = 2 ;i<ino ; i++)
    {
      if(ino % i ==0)
      {
        return false;
      }

    }
    
    return true;

  }
}
