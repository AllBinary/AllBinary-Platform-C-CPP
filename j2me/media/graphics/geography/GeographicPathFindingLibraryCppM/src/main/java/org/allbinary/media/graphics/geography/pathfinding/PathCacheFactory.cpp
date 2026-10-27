
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PathCacheFactory
            : public Object
         {

    private: static PathCacheFactory* pathFactory() { static std::unique_ptr<PathCacheFactory> value(new PathCacheFactory()); return value.get(); }

    public: static PathCacheFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathCacheFactory::pathFactory();
    
}


    private: BasicArrayListUtil* basicArrayListUtil = BasicArrayListUtil::getInstance();

    private: ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();

private: PathCacheFactory(){
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable->size();;
    
}


    public: void add(int32_t pathId, BasicArrayList* list){
this->hashtable->put(pathId, list);
    
}


    public: void remove(int32_t pathId){
this->hashtable->remove(pathId);
    
}


                //@Throws(Exception.constructor)
            
    public: void removeAll(){
this->hashtable->clear();
    

                        if(this->hashtable->size() > 0)
                        
                                    {
                                    


                            throw new Exception("Did not clear");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getOrCreate(int32_t pathIdInteger){

    Object* listCanBeNull = this->hashtable->get(pathIdInteger);;
    

                        if(listCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    listCanBeNull= this->basicArrayListUtil->getImmutableInstance();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<BasicArrayList*>(listCanBeNull);
    
}


};

            

