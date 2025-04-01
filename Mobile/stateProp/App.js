import React,{useState} from 'react'
import { StyleSheet, View} from 'react-native';
import Btn from './components/Btn';
export default function App() {
  // state
  const [bgc,setBgc] = useState("blue")

  return (
    // truyen vao bgc cho mau nen ung dung
    <View style={[styles.container,{backgroundColor: bgc}]}> 
      <Btn text="blue" backgroundColor="blue" onPress={() => setBgc("blue")} />
      <Btn text="green" backgroundColor="green" onPress={() => setBgc("green")} />
      <Btn text="red" backgroundColor="red" onPress={() => setBgc("red")} />
      <Btn text="yellow" backgroundColor="yellow" onPress={() => setBgc("yellow")} />
      <Btn text="brown" backgroundColor="brown" onPress={() => setBgc("brown")} />
      <Btn text="black" backgroundColor="black" onPress={() => setBgc("black")} />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
    gap: 30,
  },
});
