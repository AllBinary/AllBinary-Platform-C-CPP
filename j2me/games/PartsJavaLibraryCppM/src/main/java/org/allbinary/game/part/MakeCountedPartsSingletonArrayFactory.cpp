
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CountedLayerInterfaceFactoryPart.h"
#include "PartInterface.h"

class MakeCountedPartsSingletonArrayFactory
            : public Object
         {
        

    private: static const instance: MakeCountedPartsSingletonArrayFactory = new MakeCountedPartsSingletonArrayFactory();

    public static MakeCountedPartsSingletonArrayFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MakeCountedPartsSingletonArrayFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: list: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

                //@Throws(Exception.constructor)
            
    public std::vector<PartInterface> getUpdated(std::vector<PartInterface> partInterfaceArray){
this.list= new BasicArrayListD();
    




                        for (
    index: int32_t = 0;index < partInterfaceArray!.length; index++)
        {
this.list.add(partInterfaceArray[index]!);
    
}


    countedBasicArrayList: BasicArrayList = CountedPickedUpLayerInterfaceFactoryPool.getInstance()!.getList()!;;
    

    layerInterfaceFactoryInterface: CountedPickedUpLayerInterfaceFactory;;
    

    size: int32_t = countedBasicArrayList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
layerInterfaceFactoryInterface= countedBasicArrayList!.objectArray[index]! as CountedPickedUpLayerInterfaceFactory;
    
this.list.add(new CountedLayerInterfaceFactoryPart(0, layerInterfaceFactoryInterface));
    
}


    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Total Parts: ");
    
stringBuffer!.appendint(this.list.size());
    
stringBuffer!.append(" Counted: ");
    
stringBuffer!.appendint(countedBasicArrayList!.size());
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(stringBuffer!.toString(), this, commonStrings!.GET_INSTANCE);
    

    newPartInterfaceArray: std::vector<PartInterface> = new Array(this.list.size());;
    

    newSize: int32_t = newPartInterfaceArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < newSize; index++)
        {
newPartInterfaceArray[index]= this.list.get(index) as PartInterface;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newPartInterfaceArray;
    
}


};

            

