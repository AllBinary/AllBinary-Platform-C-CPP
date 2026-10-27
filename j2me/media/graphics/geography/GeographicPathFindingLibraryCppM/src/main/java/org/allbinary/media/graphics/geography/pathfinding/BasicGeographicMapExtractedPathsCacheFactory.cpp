
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/util/cache/BaseBasicArrayListCache.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapExtractedPathCacheFactory.h"

class BasicGeographicMapExtractedPathsCacheFactory: public BaseBasicArrayListCache {

    private: static BasicGeographicMapExtractedPathsCacheFactory* instance() { static std::unique_ptr<BasicGeographicMapExtractedPathsCacheFactory> value(new BasicGeographicMapExtractedPathsCacheFactory()); return value.get(); }

    public: static BasicGeographicMapExtractedPathsCacheFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicGeographicMapExtractedPathsCacheFactory::instance();
    
}


    private: int32_t maxConcurrentPaths= 0;

    private: int32_t maxPaths= 0;

private: BasicGeographicMapExtractedPathsCacheFactory(){
}


    public: void init(int32_t maxConcurrentPaths, int32_t maxPaths){

                        if(maxConcurrentPaths != this->maxConcurrentPaths)
                        
                                    {
                                    



                        for (
    int32_t index = maxConcurrentPaths;index >= this->maxConcurrentPaths; index--)
        {
this->list.add(new BasicArrayListS(maxPaths));
    
}

this->maxConcurrentPaths= maxConcurrentPaths;
    

                                    }
                                
this->maxPaths= maxPaths;
    
}


    public: BasicArrayList* getPaths(){

                        if(this->list.size() > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<BasicArrayList*>(this->list.removeAt(0));
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicArrayListS(this->maxPaths);
    

                        }
                            
}


    public: void release(BasicArrayList* list){




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {
BasicGeographicMapExtractedPathCacheFactory::getInstance()->release(dynamic_cast<BasicArrayList*>(list->get(index)));
    
}

list->clear();
    
this->list.add(list);
    
}


};

            

