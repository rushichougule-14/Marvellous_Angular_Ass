import { Component } from '@angular/core';
import { StringCountService } from '../string-count.service';
import { NumberService } from '../number.service';
import { CommonModule } from '@angular/common';

@Component({
  selector: 'app-child',
  standalone: true,
  imports: [CommonModule],
  templateUrl: './child.component.html',
  styleUrl: './child.component.css',
  providers : [StringCountService,NumberService]
})
export class ChildComponent 
{
  public bret :any;
  public ino = 17;
  public str:string = "MarveLLous";
  public ret : number ;
  
  constructor(private obj:NumberService,private sobj:StringCountService)
  {
     this.bret = this.obj.ChkPrime(this.ino);
     this.ret = sobj.StringCount(this.str);

  }
  

}
