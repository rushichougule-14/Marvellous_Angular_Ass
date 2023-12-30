import { Component } from '@angular/core';
import { CommonModule } from '@angular/common';
import { RouterOutlet } from '@angular/router';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [CommonModule, RouterOutlet],
  template: 
  `<input type="text">
  <h2 [class] = "headClass">Marvellous Infosystem</h2>`,
  styles: [`.head
  {
      color:blue;
  
  }`]
})
export class AppComponent {
  title = 'Assign6';
  headClass = 'head';
   
}
