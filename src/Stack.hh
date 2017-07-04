<?hh //strict

namespace HHPack\Docker;

final class Stack<T>
{

    private Set<T> $items;

    public function __construct(Traversable $items = [])
    {
        $this->items = Set::fromItems($items);
    }

    public function add($item): void
    {
        $this->items->add($item);
    }

    public function size(): int
    {
        return $this->items->count();
    }
}
