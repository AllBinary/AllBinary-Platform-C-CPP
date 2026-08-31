
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
        
#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/LayerInterfaceFactory.h>

      
#include <org/allbinary/layer/LayerInterfaceVisitor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerPlacementInterface.h"
#include "LayerPlacementType.h"
#include "LayerPlacementTypeFactory.h"

class LayerPlacer
            : public Object
         {
        

    private: const enumerationUtil: EnumerationUtil = EnumerationUtil.getInstance()!;

    const layerInterfaceVisitor: LayerInterfaceVisitor;

    private: const dimension: GPoint;

public constructor (LayerInterfaceVisitor layerInterfaceVisitor, GPoint dimension){

            super();
        this.layerInterfaceVisitor= layerInterfaceVisitor;
    
this.dimension= dimension;
    
}


                //@Throws(Exception.constructor)
            
    public processList(BasicArrayList list){

    size: int32_t = list.size()!;;
    

    layerPlacementInterface: LayerPlacementInterface;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
layerPlacementInterface= list.objectArray[index]! as LayerPlacementInterface;
    
this.process(layerPlacementInterface);
    
}

}


                //@Throws(Exception.constructor)
            
    public process(LayerPlacementInterface layerPlacementInterface){

    relativePoint: GPoint = this.getPoint(layerPlacementInterface)!;;
    

    layerInterfaceFactory: LayerInterfaceFactory = LayerInterfaceFactory.getInstance()!;;
    

    hashtable: Hashtable<any, any> = layerPlacementInterface!.getInstance()!;;
    

    enumeration: Enumeration<any> = hashtable.keys()!;;
    

    point: GPoint;;
    

    layerHashtable: Hashtable<any, any>;;
    

    x: int32_t= 0;;
    

    y: int32_t= 0;;
    

    z: int32_t= 0;;
    

    layerInterface: AllBinaryLayer;;
    

        while(this.enumerationUtil!.hasMoreElements(enumeration))
        {
point= this.enumerationUtil!.nextElement(enumeration)! as GPoint;
    
layerHashtable= hashtable.get(point) as Hashtable<any, any>;
    
x= point.getX() +relativePoint!.getX();
    
y= point.getY() +relativePoint!.getY();
    
z= point.getZ() +relativePoint!.getZ();
    
layerInterface= layerInterfaceFactory!.getNexInstance(layerHashtable, x, y, z);
    
this.layerInterfaceVisitor!.visit(layerInterface);
    
}

}


                //@Throws(Exception.constructor)
            
    public GPoint getPoint(LayerPlacementInterface layerPlacementInterface){

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    layerPlacementType: LayerPlacementType = layerPlacementInterface!.getLayerType()!;;
    

                        if(layerPlacementType == LayerPlacementTypeFactory.getInstance()!.MAP)
                        
                                    {
                                    
    width: int32_t = layerPlacementInterface!.getWidth()!;;
    

    height: int32_t = layerPlacementInterface!.getHeight()!;;
    

    x: int32_t = ((this.dimension.getX() -width) /2);;
    

    y: int32_t = ((this.dimension.getY() -height) /2);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pointFactory!.createXY(x, y);;
    

                                    }
                                
                             else 
                        if(layerPlacementType == LayerPlacementTypeFactory.getInstance()!.UP)
                        
                                    {
                                    
    width: int32_t = layerPlacementInterface!.getWidth()!;;
    

    height: int32_t = layerPlacementInterface!.getHeight()!;;
    

    x: int32_t = ((this.dimension.getX() -width) /2);;
    

    y: int32_t =  -height;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pointFactory!.createXY(x, y);;
    

                                    }
                                
                        else {
                            


                            throw new Exception("PlacementType Not Recognized");
                    

                        }
                            
}


};

            

