import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class ArithmeticService 
{
 
  constructor() 
  {

  }

  Add(ino : number , ino2 :number):any
  {
    return ino + ino2 ;

  }

  Sub(ino : number , ino2 :number):any
  {
    return ino - ino2;

  }
}
