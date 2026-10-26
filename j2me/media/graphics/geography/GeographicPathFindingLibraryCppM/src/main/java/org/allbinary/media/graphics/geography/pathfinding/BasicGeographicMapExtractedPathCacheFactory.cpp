
        /* Generated Code Do Not Modify */
        



#include <org/allbinary/logic/util/cache/BaseBasicArrayListCache.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGeographicMapExtractedPathCacheFactory: public BaseBasicArrayListCache {

    private: static BasicGeographicMapExtractedPathCacheFactory instance() { return BasicGeographicMapExtractedPathCacheFactory(); }

    public: static BasicGeographicMapExtractedPathCacheFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicGeographicMapExtractedPathCacheFactory::instance();
    
}


    private: int32_t maxConcurrentPaths= 0;

    private: int32_t maxPaths= 0;

private: BasicGeographicMapExtractedPathCacheFactory(){
}


    public: void init(int32_t maxConcurrentPaths, int32_t maxPaths){

                        if(maxConcurrentPaths != this->maxConcurrentPaths)
                        
                                    {
                                    



                        for (
    int32_t index = maxConcurrentPaths;index >= this->maxConcurrentPaths; index--)
        {
this->list.add(BasicArrayListS(maxPaths));
    
}

this->maxConcurrentPaths= maxConcurrentPaths;
    

                                    }
                                
this->maxPaths= maxPaths;
    
}


    public: BasicArrayList getPath(){

                        if(this->list.size() > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list.removeAt(0);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListS(this->maxPaths);
    

                        }
                            
}


    public: void release(BasicArrayList list){
list.clear();
    
this->list.add(list);
    
}


};

            

