
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/SynchObject.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerManagerLoggingBase.h"
#include "AllBinaryLayer.h"
#include "Layer.h"

class LayerManager
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const layerManagerLogging: LayerManagerLoggingBase;

    private: const list: BasicArrayList = new BasicArrayListD();

    private: const anyType: SynchObject = new SynchObject();

public constructor (LayerManagerLoggingBase layerManagerLogging){

            super();
        this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.layerManagerLogging= layerManagerLogging;
    
}


    public bool contains(AllBinaryLayer layerInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.contains(layerInterface);;
    
}


                //@Throws(Exception.constructor)
            
    public update(AllBinaryLayer layerInterface){

    had: bool = this.list.remove(layerInterface)!;;
    

                        if(had)
                        
                                    {
                                    
    nextLayerInterface: AllBinaryLayer;;
    

    size: int32_t = this.list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
nextLayerInterface= this.list.get(index) as AllBinaryLayer;
    

                        if(layerInterface!.getZP() > nextLayerInterface!.getZP())
                        
                                    {
                                    this.list.addAt(index, layerInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}

this.list.add(layerInterface);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public insert(AllBinaryLayer layerInterface){

    nextLayerInterface: AllBinaryLayer;;
    

    size: int32_t = this.list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
nextLayerInterface= this.list.get(index) as AllBinaryLayer;
    

                        if(layerInterface!.getZP() > nextLayerInterface!.getZP())
                        
                                    {
                                    this.appendAt(layerInterface, index);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}

this.append(layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public append(AllBinaryLayer layerInterface){
this.layerManagerLogging!.append(layerInterface);
    
this.list.add(layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public appendAt(AllBinaryLayer layerInterface, int32_t index){
this.layerManagerLogging!.appendAt(layerInterface, index);
    
this.list.addAt(index, layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public remove(AllBinaryLayer layerInterface){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this.anyType) 

        //mutex.withLock
        
this.layerManagerLogging!.remove(layerInterface);
    

    result: bool = this.list.remove(layerInterface)!;;
    
this.layerManagerLogging!.removeResult(this, layerInterface, result);
    


}


    public Layer getLayerAt(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.objectArray[index]! as Layer;
    
}


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list.size();;
    
}


                //@Throws(Exception.constructor)
            
    public cleanup(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this.anyType) 

        //mutex.withLock
        
this.list.clear();
    
this.layerManagerLogging!.clear();
    
System.gc();
    
System.gc();
    


}


    public paint(Graphics g, int32_t x, int32_t y){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this.anyType) 

        //mutex.withLock
        

    comp: Layer;;
    




                        for (
    index: int32_t = this.list.size()!;--index >= 0; )
        {
comp= this.list.objectArray[index]! as Layer;
    

                        if(comp != 
                                    null
                                 && comp.isVisible())
                        
                                    {
                                    comp.paint(g);
    

                                    }
                                
}



}


};

            

