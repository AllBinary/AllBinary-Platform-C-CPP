
        /* Generated Code Do Not Modify */
        



#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/util/cache/BaseBasicArrayListCache.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicGeographicMapExtractedPathCacheFactory.h"

class BasicGeographicMapExtractedPathsCacheFactory: public BaseBasicArrayListCache {
        

    private: static const instance: BasicGeographicMapExtractedPathsCacheFactory = new BasicGeographicMapExtractedPathsCacheFactory();

    public static BasicGeographicMapExtractedPathsCacheFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicGeographicMapExtractedPathsCacheFactory.instance;
    
}


    private: maxConcurrentPaths: int32_t= 0;

    private: maxPaths: int32_t= 0;

private constructor (){

            super();
        }


    public init(int32_t maxConcurrentPaths, int32_t maxPaths){

                        if(maxConcurrentPaths != this.maxConcurrentPaths)
                        
                                    {
                                    



                        for (
    index: int32_t = maxConcurrentPaths;index >= this.maxConcurrentPaths; index--)
        {
this.list.add(new BasicArrayListS(maxPaths));
    
}

this.maxConcurrentPaths= maxConcurrentPaths;
    

                                    }
                                
this.maxPaths= maxPaths;
    
}


    public BasicArrayList getPaths(){

                        if(this.list.size() > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.removeAt(0) as BasicArrayList;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicArrayListS(this.maxPaths);
    

                        }
                            
}


    public release(BasicArrayList list){




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {
BasicGeographicMapExtractedPathCacheFactory.getInstance()!.release(list.get(index) as BasicArrayList);
    
}

list.clear();
    
this.list.add(list);
    
}


};

            

