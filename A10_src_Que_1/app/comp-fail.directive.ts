import { Directive, ElementRef,HostListener } from '@angular/core';

@Directive({
  selector: '[appCompFail]',
  standalone: true
})
export class CompFailDirective {

  constructor(private obj :ElementRef) 
  { 

  }
  @HostListener('mouseenter') onmouseenter()
  {
    this.obj.nativeElement.style.background = 'red';
  }

  @HostListener('mouseleave') onmouseleave()
  {
    this.obj.nativeElement.style.background = 'black';
    
  }



}
