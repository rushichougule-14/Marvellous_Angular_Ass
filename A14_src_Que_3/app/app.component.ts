import { Component } from '@angular/core';
import { CommonModule } from '@angular/common';
import { RouterOutlet } from '@angular/router';
import { TechnologyComponent } from './technology/technology.component';
import { TehnologyBooksComponent } from './tehnology-books/tehnology-books.component';
import { RouterLink } from '@angular/router';
import { DefaultComponent } from './default/default.component';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [CommonModule, RouterOutlet,TechnologyComponent,TehnologyBooksComponent,RouterLink,DefaultComponent],
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  title = 'Route';
}
