
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Layer.h"
#include "LayerInterfaceFactoryInterface.h"
#include "AllBinaryLayer.h"

class LayerInterfaceFactory
            : public Object
         {
        

    private: static const SINGLETON: LayerInterfaceFactory = new LayerInterfaceFactory();

    public static LayerInterfaceFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerInterfaceFactory.SINGLETON;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: list: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    public init(){
this.list= new BasicArrayListD();
    
}


    private: const HASHTABLE_LABEL: string = "Hashtable: ";

                //@Throws(Exception.constructor)
            
    public AllBinaryLayer getNexInstance(Hashtable<any, any> hashtable, int32_t x, int32_t y, int32_t z){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(new StringMaker().append(this.HASHTABLE_LABEL)!.append(StringUtil.getInstance()!.toString(hashtable))!.toString(), this, commonStrings!.GET_INSTANCE);
    

    typeInteger: Integer = hashtable.get(Layer.ID) as Integer;;
    

    layerInterfaceFactoryInterface: LayerInterfaceFactoryInterface = this.list.objectArray[typeInteger!.intValue() -1]! as LayerInterfaceFactoryInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return layerInterfaceFactoryInterface!.getNextInstance(hashtable, x, y, z);;
    
}


    public add(LayerInterfaceFactoryInterface layerInterfaceFactoryInterface){
this.list.add(layerInterfaceFactoryInterface);
    
}


};

            

