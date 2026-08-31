
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicAI.h"
#include "ArtificialIntelligenceInterfaceFactoryInterface.h"

class ArtificialIntelligenceInterfaceFactoryInterfaceFactory
            : public Object
         {
        

    private: static SINGLETON: ArtificialIntelligenceInterfaceFactoryInterfaceFactory = new ArtificialIntelligenceInterfaceFactoryInterfaceFactory();

    public static ArtificialIntelligenceInterfaceFactoryInterfaceFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ArtificialIntelligenceInterfaceFactoryInterfaceFactory.SINGLETON;
    
}


    private: list: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    public clear(){
this.list= new BasicArrayListD();
    
}


    public ArtificialIntelligenceInterfaceFactoryInterface getInstanceFromCollection(Hashtable<any, any> hashtable){

    typeInteger: Integer = hashtable.get(BasicAI.ID) as Integer;;
    

    type: int32_t = typeInteger!.intValue()!;;
    

    artificialIntelligenceInterfaceFactoryInterface: ArtificialIntelligenceInterfaceFactoryInterface = this.list.objectArray[type -1]! as ArtificialIntelligenceInterfaceFactoryInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return artificialIntelligenceInterfaceFactoryInterface;
    
}


    public add(ArtificialIntelligenceInterfaceFactoryInterface artificialIntelligenceInterfaceFactoryInterface){
this.list.add(artificialIntelligenceInterfaceFactoryInterface);
    
}


};

            

