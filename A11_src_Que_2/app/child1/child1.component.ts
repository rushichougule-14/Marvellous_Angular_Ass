import { Component } from '@angular/core';
import { NumberService } from '../number.service';
import { CommonModule } from '@angular/common';
@Component({
  selector: 'app-child1',
  standalone: true,
  imports: [CommonModule],
  templateUrl: './child1.component.html',
  styleUrl: './child1.component.css',
  providers :[NumberService]
})
export class Child1Component 
{
  public bret :any;
  public ino = 17;
  
  constructor(private obj:NumberService)
  {
     this.bret = this.obj.ChkPrime(this.ino);
  }

}
