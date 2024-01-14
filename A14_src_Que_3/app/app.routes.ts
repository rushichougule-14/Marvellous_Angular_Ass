import { Routes } from '@angular/router';
import { TechnologyComponent } from './technology/technology.component';
import { TehnologyBooksComponent } from './tehnology-books/tehnology-books.component';
import { DefaultComponent } from './default/default.component';

export const routes: Routes = [
    {path:'',component:TechnologyComponent},
    {path:'technologyBooks',component:TehnologyBooksComponent},
    {path:'**',component:DefaultComponent}

];
