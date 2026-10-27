
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/BaseBasicArrayListCache.h"
#include "org/allbinary/logic/util/cache/CacheInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"

class IndexedBasicArrayListCache: public BaseBasicArrayListCache, public CacheInterface {

                //@Throws(Exception.constructor)
            
    public: static IndexedBasicArrayListCache* createCache(int32_t size){

    IndexedBasicArrayListCache* indexedBasicArrayListCache = new IndexedBasicArrayListCache();;
    
indexedBasicArrayListCache->init(size);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return indexedBasicArrayListCache;
    
}


    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: int32_t size = 0;

    protected: int32_t index = 0;

public: IndexedBasicArrayListCache(){
}


                //@Throws(Exception.constructor)
            
    public: void init(int32_t size){

                        if(this->size < size)
                        
                                    {
                                    this->list.ensureCapacity(size);
    




                        for (
    int32_t index = size -1;index >= this->size; index--)
        {
this->addDefault();
    
}

this->size= size;
    

                                    }
                                
}


    public: Object* getAt(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list.objectArray[index];
    
}


                //@Throws(Exception.constructor)
            
    public: void addDefault(){
}


                //@Throws(Exception.constructor)
            
    public: void addObject(Object anyType){
this->list.add(anyType);
    
}


                //@Throws(Exception.constructor)
            
    public: void add(CacheableInterface* cacheableInterface){
this->list.add(cacheableInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void addArray(std::vector<CacheableInterface*> cacheableInterfaces){



                            throw new Exception("No Imple");
                    
}


    public: void clear(){
this->index= 0;
    
}


};

            

