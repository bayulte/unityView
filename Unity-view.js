import React, { Component } from 'react';
import { View, Text ,StatusBar,SafeAreaView,TouchableOpacity,ScrollView,Image,ActivityIndicator,Linking,RefreshControl,Modal,Alert,ImageBackground,Dimensions,KeyboardAvoidingView,Platform,Button} from 'react-native';

const {
  width: SCREEN_WIDTH,
  height: SCREEN_HEIGHT,
} = Dimensions.get('window');
//redux
import UnityView from '@azesmway/react-native-unity';


class Sites_detail extends Component {

  state = {
    show: false,
  }

  sendData(){
    let unityData =
    {
      message: 'Hell yeah',
      color: { 'a': 1.0, 'b': 0.0, 'g': 0.0, 'r': 1.0 }
    };
    console.log(this.unityView)
    if (this.unityView){
      alert('Send data to unity')
      this.unityView.postMessage('GameManager', 'GetDataFromReact', JSON.stringify(unityData));
    }
  }

  render() {
    return (
      <>
      <SafeAreaView style={{backgroundColor:'green'}}/>
      <SafeAreaView style={{flex: 1,backgroundColor:'green'}}>
      <View style={{flex:1}}>
        <StatusBar translucent={true} backgroundColor={'transparent'} barStyle={"light-content"}/>

        <View style={{flex:1}}>
        <View style={{paddingHorizontal:15,paddingVertical:10,marginTop:50}}>
          <Button
            title="Send"
            onPress={() => this.sendData()}
          />
        </View>
        <UnityView
          ref={(ref) => (this.unityView = ref)}
          style={{ flex: 1 }}
          onUnityMessage={(result) => {
            console.log('onUnityMessage', result.nativeEvent.message);
            alert('onUnityMessage')
          }}
        />
        </View>
      </View>
      </SafeAreaView>
      </>
    );
  }
}

export default Sites_detail;
