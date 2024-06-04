export module lib;

import <print>;

export namespace lib
{
    struct Example
    {
        void hello()
        {
            std::println("Hello future!");
        }
    };
}
