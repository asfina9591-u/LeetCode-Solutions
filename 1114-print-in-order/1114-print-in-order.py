import threading

class Foo:
    def __init__(self):
        # Create locks for the second and third methods
        self.first_job_done = threading.Lock()
        self.second_job_done = threading.Lock()
        
        # Acquire them initially so thread 2 and thread 3 are blocked
        self.first_job_done.acquire()
        self.second_job_done.acquire()

    def first(self, printFirst: 'Callable[[], None]') -> None:
        # printFirst() outputs "first". Do not change or remove this line.
        printFirst()
        # Release the lock so second() can proceed
        self.first_job_done.release()

    def second(self, printSecond: 'Callable[[], None]') -> None:
        # Wait until first() finishes and releases the lock
        with self.first_job_done:
            # printSecond() outputs "second". Do not change or remove this line.
            printSecond()
            # Release the lock so third() can proceed
            self.second_job_done.release()

    def third(self, printThird: 'Callable[[], None]') -> None:
        # Wait until second() finishes and releases the lock
        with self.second_job_done:
            # printThird() outputs "third". Do not change or remove this line.
            printThird()