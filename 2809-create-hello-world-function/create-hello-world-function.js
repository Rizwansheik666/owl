/**
 * @return {Function}
 */
var createHelloWorld = function() {
    const gre="Hello World";

    return function(...args) {
        return gre;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */