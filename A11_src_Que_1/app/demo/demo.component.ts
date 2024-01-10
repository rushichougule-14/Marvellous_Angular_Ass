import { Component } from '@angular/core';
import { ArithmeticService } from '../arithmetic.service';

@Component({
  selector: 'app-demo',
  standalone: true,
  imports: [],
  templateUrl: './demo.component.html',
  styleUrl: './demo.component.css',
  providers: [ArithmeticService]
})
export class DemoComponent 
{
  public ians : number;
  public iret : number;
  constructor(private obj : ArithmeticService)
  {
    this.ians = this.obj.Add(21,11);
    this.iret = this.obj.Sub(21,11);
  }


}
