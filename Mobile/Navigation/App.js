import { StyleSheet, Text, View } from 'react-native';
import {NavigationContainer} from '@react-navigation/native';
import {createStackNavigator} from '@react-navigation/stack';
import HomeScreen from './screens/HomeScreen';
import SignInScreen from './screens/SignInScreen';
const Stack = createStackNavigator();

export default function App() {
  return (
    <NavigationContainer>
      <Stack.Navigator initialRouteName='SignIn'>
        <Stack.Screen name='SignIn' component={SignInScreen} options={{title: "Đăng Nhập" , headerTitleAlign: 'center'}} />
        <Stack.Screen name='Home' component={HomeScreen} options={{title: "Trang Chủ" , headerTitleAlign: 'center'}}  />
      </Stack.Navigator>
    </NavigationContainer>
  );
}


