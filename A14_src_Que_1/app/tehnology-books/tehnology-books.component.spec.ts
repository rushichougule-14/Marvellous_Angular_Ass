import { ComponentFixture, TestBed } from '@angular/core/testing';

import { TehnologyBooksComponent } from './tehnology-books.component';

describe('TehnologyBooksComponent', () => {
  let component: TehnologyBooksComponent;
  let fixture: ComponentFixture<TehnologyBooksComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      imports: [TehnologyBooksComponent]
    })
    .compileComponents();
    
    fixture = TestBed.createComponent(TehnologyBooksComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
