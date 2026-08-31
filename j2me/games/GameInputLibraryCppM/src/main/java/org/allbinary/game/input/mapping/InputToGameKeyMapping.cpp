
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
        



            #include "../../../../../java/lang/Throwable.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputMapping.h"

class InputToGameKeyMapping: public InputMapping {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static InputToGameKeyMapping getNullInstance(){

                        if(InputToGameKeyMapping.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    InputToGameKeyMapping.instance= new InputToGameKeyMapping();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputToGameKeyMapping.instance as InputToGameKeyMapping;
    
}


    private: const gameKeyFactory: GameKeyFactory = GameKeyFactory.getInstance()!;

    private: const mappedGameKeys: std::vector<GameKey> = 
                                                        [
                                                            this.gameKeyFactory!.UP,this.gameKeyFactory!.DOWN,this.gameKeyFactory!.LEFT,this.gameKeyFactory!.RIGHT
                                                        ];

    private: const platformToGameKeyMapping: std::vector<GameKey> = new Array(InputFactory.getInstance()!.MAX);

    negativePlatformToGameKeyMapping: std::vector<GameKey> = [];

public constructor (){

            super();
        this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.clear();
    
}


    clear(){




                        for (
    index: int32_t = this.platformToGameKeyMapping!.length -1;index >= 0; index--)
        {
this.platformToGameKeyMapping[index]= this.gameKeyFactory!.NONE;
    
}

}


    removeAll(){
super.removeAll();
    
this.clear();
    
}


    public addMapping(InputToGameKeyMapping inputToGameKeyMapping){




                        for (
    index: int32_t = inputToGameKeyMapping!.getMaxMappable() -1;index >= 0; index--)
        {

    input: Input = inputToGameKeyMapping!.getInstance(index)!;;
    

                        if(input != this.gameKeyFactory!.NONE)
                        
                                    {
                                    this.addAll(input, inputToGameKeyMapping!.getMappedInput(input));
    

                                    }
                                
}

}


    addAll(Input input, BasicArrayList list){




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {

    mappedToInput: Input = list.objectArray[index]! as Input;;
    
this.add(input, mappedToInput);
    
}

}


    public add(Input input, Input mappedToInput){
super.add(input, mappedToInput);
    
this.set(input, mappedToInput);
    
}


    public remove(Input input, Input mappedToInput){
this.logUtil!.putF(new StringMaker().append(CommonLabels.getInstance()!.START_LABEL)!.append(StringUtil.getInstance()!.toString(input))!.append(" == ")!.append(StringUtil.getInstance()!.toString(mappedToInput))!.toString(), this, "InputToGameKeyMapping::remove");
    
super.remove(input, mappedToInput);
    
this.set(input, this.gameKeyFactory!.NONE);
    
}


    set(Input input, Input mappedToInput){

    id: int32_t = mappedToInput!.getId()!;;
    

                        if(id >= 0 && id < this.platformToGameKeyMapping!.length)
                        
                                    {
                                    this.platformToGameKeyMapping[id]= input as GameKey;
    

                                    }
                                
}


    public int32_t getMaxMappable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.platformToGameKeyMapping!.length;
    
}


    public BasicArrayList getReverseInstance(int32_t id){

    list: BasicArrayList = new BasicArrayListD();;
    

    inputFactory: InputFactory = InputFactory.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < this.platformToGameKeyMapping!.length; index++)
        {

                        if(this.platformToGameKeyMapping[index]!.getId() == id)
                        
                                    {
                                    
    input: Input = inputFactory!.getInstanceById(index)!;;
    

                        if(input != 
                                    null
                                )
                        
                                    {
                                    list.add(input);
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


                //@Throws(Exception.constructor)
            
    initGameKey(Canvas canvas, GameKey gameKey){

    key: int32_t = canvas.getKeyCode(gameKey!.getId())!;;
    

                        if(key < 0 &&  -key < this.negativePlatformToGameKeyMapping!.length)
                        
                                    {
                                    this.negativePlatformToGameKeyMapping[ -key]= gameKey;
    

                                    }
                                
                             else 
                        if(key > 0)
                        
                                    {
                                    
                        if(this.platformToGameKeyMapping[key] == this.gameKeyFactory!.NONE)
                        
                                    {
                                    this.platformToGameKeyMapping[key]= gameKey;
    

                                    }
                                

                                    }
                                
                        else {
                            PreLogUtil.putOE(new StringMaker().append(gameKey!.toString())!.append(CommonSeps.getInstance()!.COLON_SEP)!.appendint(key)!.toString(), this, this.commonStrings!.INIT, new Exception());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    int32_t getSmallestCanvasGameKeyCode(Canvas canvas){

    nextKey: int32_t = 0;;
    

    smallestKey: int32_t = 0;;
    




                        for (
    index: int32_t = this.mappedGameKeys!.length
                ;--index >= 0; )
        {
nextKey= canvas.getKeyCode(this.mappedGameKeys[index]!.getId());
    

                        if(nextKey < smallestKey)
                        
                                    {
                                    smallestKey= nextKey;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return smallestKey;
    
}


    public init(Canvas canvas){

        try {
            
    negativePlatformToGameKeyMapping: std::vector<GameKey> = [];;
    

    smallestKey: int32_t = this.getSmallestCanvasGameKeyCode(canvas)!;;
    

                        if(smallestKey < 0)
                        
                                    {
                                    smallestKey--;
    

                        if(smallestKey <  -256)
                        
                                    {
                                    smallestKey=  -256;
    

                                    }
                                
negativePlatformToGameKeyMapping= new Array( -smallestKey);
    




                        for (
    index: int32_t = negativePlatformToGameKeyMapping!.length
                ;--index >= 0; )
        {
negativePlatformToGameKeyMapping[index]= this.gameKeyFactory!.NONE;
    
}

this.negativePlatformToGameKeyMapping= negativePlatformToGameKeyMapping;
    

                                    }
                                




                        for (
    index: int32_t = this.mappedGameKeys!.length
                ;--index >= 0; )
        {
this.initGameKey(canvas, this.mappedGameKeys[index]!);
    
}


                //: 
} catch(t) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.INIT, t);
    
}

}


    public GameKey getInstanceForCanvas(Canvas canvas, int32_t id){

                        if(id >= 0 && id < this.platformToGameKeyMapping!.length)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.platformToGameKeyMapping[id]!;
    

                                    }
                                
                             else 
                        if(id < 0 &&  -id < this.negativePlatformToGameKeyMapping!.length)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.negativePlatformToGameKeyMapping[ -id]!;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameKeyFactory!.NONE;
    

                        }
                            
}


    public GameKey getInstance(int32_t id){

                        if(id >= 0 && id < this.platformToGameKeyMapping!.length)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.platformToGameKeyMapping[id]!;
    

                                    }
                                
                             else 
                        if(id < 0 &&  -id < this.negativePlatformToGameKeyMapping!.length)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.negativePlatformToGameKeyMapping[ -id]!;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameKeyFactory!.NONE;
    

                        }
                            
}


};

            

