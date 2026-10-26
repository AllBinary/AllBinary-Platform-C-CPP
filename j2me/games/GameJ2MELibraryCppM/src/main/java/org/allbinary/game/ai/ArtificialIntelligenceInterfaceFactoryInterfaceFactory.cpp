
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
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicAI.h"
#include "ArtificialIntelligenceInterfaceFactoryInterface.h"

class ArtificialIntelligenceInterfaceFactoryInterfaceFactory
            : public Object
         {

    private: static ArtificialIntelligenceInterfaceFactoryInterfaceFactory SINGLETON = ArtificialIntelligenceInterfaceFactoryInterfaceFactory();

    public: static ArtificialIntelligenceInterfaceFactoryInterfaceFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ArtificialIntelligenceInterfaceFactoryInterfaceFactory::SINGLETON;
    
}


    private: BasicArrayList list = BasicArrayListUtil::getInstance().getImmutableInstance();

    public: void clear(){
this->list= BasicArrayListD();
    
}


    public: ArtificialIntelligenceInterfaceFactoryInterface getInstanceFromCollection(ABHashtable<Object*, Object*> hashtable){

    Integer typeInteger = hashtable.get(BasicAI::ID);;
    

    int32_t type = typeInteger.intValue();;
    

    ArtificialIntelligenceInterfaceFactoryInterface artificialIntelligenceInterfaceFactoryInterface = this->list.objectArray[type -1];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return artificialIntelligenceInterfaceFactoryInterface;
    
}


    public: void add(ArtificialIntelligenceInterfaceFactoryInterface artificialIntelligenceInterfaceFactoryInterface){
this->list.add(artificialIntelligenceInterfaceFactoryInterface);
    
}


};

            

