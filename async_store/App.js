import * as React from 'react';
import { NavigationContainer } from '@react-navigation/native';
import { createStackNavigator } from '@react-navigation/stack';
import { createBottomTabNavigator } from '@react-navigation/bottom-tabs';
import SignIn from './screens/SignIn';
import Explorer from './screens/Explorer';
import Account from './screens/Account';
import { Ionicons } from '@expo/vector-icons';

const Stack = createStackNavigator();
const Tab = createBottomTabNavigator();

function MainTabs() {
  return (
    <Tab.Navigator
      screenOptions={({ route }) => ({
        tabBarIcon: ({ color, size }) => {
          let iconName;
          if (route.name === 'Explorer') {
            iconName = 'search-outline';
          } else if (route.name === 'Account') {
            iconName = 'person-outline';
          }
          return <Ionicons name={iconName} size={size} color={color} />;
        },
      })} 
      tabBarOptions={{
        activeTintColor: '#f57c00',
        inactiveTintColor: 'gray',
      }}
    >
      <Tab.Screen name="Explorer" component={Explorer} options={{headerShown: false}} />
      <Tab.Screen name="Account" component={Account} />
    </Tab.Navigator>
  );
}

export default function App() {
  return (
    <NavigationContainer>
      <Stack.Navigator initialRouteName="SignIn" screenOptions={{ headerShown: false }}>
        <Stack.Screen name="SignIn" component={SignIn} />
        <Stack.Screen name="MainTabs" component={MainTabs} options={{ headerShown: false }} />
      </Stack.Navigator>
    </NavigationContainer>
  );
}