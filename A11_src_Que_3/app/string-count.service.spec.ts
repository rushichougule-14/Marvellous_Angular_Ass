import { TestBed } from '@angular/core/testing';

import { StringCountService } from './string-count.service';

describe('StringCountService', () => {
  let service: StringCountService;

  beforeEach(() => {
    TestBed.configureTestingModule({});
    service = TestBed.inject(StringCountService);
  });

  it('should be created', () => {
    expect(service).toBeTruthy();
  });
});
