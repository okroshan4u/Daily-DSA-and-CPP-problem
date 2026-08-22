// LRU implementation

class LRUcache{
    constructor (capacity){
        this.capacity = capacity;
        this.cache = new Map();
    }
   
    get(key){
        if(!this.cache.has(key)){
            return -1;
        }
       
        //get the value here
        const value = this.cache.get(key);
       
        //move key at the end = most recently used
        this.cache.delete(key);
        this.cache.set(key,value);
       
        return value;
    }
   
    put(key, value){
        // if key already exist then remove it first
        if(this.cache.has(key)){
            this.cache.delete(key);
        }
        //add it to the end = most recently used
        this.cache.set(key, value);
       
        // if capacity exceeded , remove first item
       
        if(this.cache.size > this.capacity){
            const firstKey= this.cache.keys().next().value;
            this.cache.delete(firstKey);
        }
    }
   
}


const lru = new LRUcache(3);

lru.put("A",1);
lru.put("B",2);
lru.put("C",3);
