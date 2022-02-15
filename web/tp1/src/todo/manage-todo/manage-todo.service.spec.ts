import { Test, TestingModule } from '@nestjs/testing';
import { ManageTodoService } from './manage-todo.service';

describe('ManageTodoService', () => {
  let service: ManageTodoService;

  beforeEach(async () => {
    const module: TestingModule = await Test.createTestingModule({
      providers: [ManageTodoService],
    }).compile();

    service = module.get<ManageTodoService>(ManageTodoService);
  });

  it('should be defined', () => {
    expect(service).toBeDefined();
  });
});
