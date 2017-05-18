<?hh //strict

namespace HHPack\Docker\Test;

use HHPack\Docker\Stack;
use HackPack\HackUnit\Contract\Assert;

final class StackTest
{

    public function __construct(
        private Stack<int> $stack
    )
    {
    }

    <<SuiteProvider('EmptyStack')>>
    public static function emptyStack(): this
    {
        return new static(new Stack());
    }

    <<Test('EmptyStack')>>
    public function addItemTest(Assert $assert): void
    {
        $this->stack->add(1);

        $assert->int($this->stack->size())->eq(1);
    }
}
