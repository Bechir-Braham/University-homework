import { Module } from '@nestjs/common';
import { TodoController } from './todo.controller';
import { ManageTodoService } from './manage-todo/manage-todo.service';

@Module({
  controllers: [TodoController],
  providers: [ManageTodoService],
})
export class TodoModule {}
