
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ResourceRelativeRelationshipFactoryInterface.h"

class ResourceRelativeRelationshipFactory
            : public Object
        : public ResourceRelativeRelationshipFactoryInterface {

    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

    private: const ABHashtable<Object*, Object*> hashtable = StdUtil::getInstance().createHashtable();

    private: bool initialized= false;

                //@Throws(Exception.constructor)
            
    public: void init(int32_t level){
this->setInitialized(true);
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getResourceRelativeRelationshipList(std::string resource){

    Object* listCanBeNull = this->hashtable.get(resource);;
    

                        if(listCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicArrayListUtil.getImmutableInstance();;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return *dynamic_cast<BasicArrayList*>(listCanBeNull);
    
}


                //@Throws(Exception.constructor)
            
    public: void addResourceRelativeRelationship(std::string resource, RelativeRelationship hardPoint){

    BasicArrayList list = this->getResourceRelativeRelationshipList(resource);;
    

                        if(list == this->basicArrayListUtil.getImmutableInstance())
                        
                                    {
                                    list= BasicArrayListD();
    

                                    }
                                
list.add(hardPoint);
    
this->hashtable.put(resource, list);
    
}


    public: bool isLoadingLevel(int32_t level){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isFeature(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void setInitialized(bool initialized){
this->initialized= initialized;
    
}


    public: bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initialized;
    
}


};

            

