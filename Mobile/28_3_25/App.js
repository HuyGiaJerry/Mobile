import React from 'react';
import { View, Text } from 'react-native';
import { createBottomTabNavigator } from '@react-navigation/bottom-tabs';
import { createStackNavigator } from '@react-navigation/stack';
import { NavigationContainer } from '@react-navigation/native';
import Icon from 'react-native-vector-icons/Ionicons';
import HomeScreen from './screens/HomeScreen';
import ShoppingCartScreen from './screens/ShoppingCartScreen';
import OrderScreen from './screens/OrderScreen'; 
import InboxScreen from './screens/InboxScreen'; 
import ProfileScreen from './screens/ProfileScreen'; 

const Tab = createBottomTabNavigator();
const Stack = createStackNavigator();

// Stack Navigator for Home and Shopping Cart
const HomeStack = () => {
    return (
        <Stack.Navigator>
            <Stack.Screen name="Home" component={HomeScreen} options={{ headerShown: false }} />
            <Stack.Screen name="ShoppingCart" component={ShoppingCartScreen} options={{ headerShown: false }} />
        </Stack.Navigator>
    );
};

// Bottom Tabs Navigator
const App = () => {
    return (
        <NavigationContainer>
            <Tab.Navigator
                screenOptions={({ route }) => ({
                    tabBarIcon: ({ color, size }) => {
                        let iconName;
                        if (route.name === 'Home') {
                            iconName = 'home-outline';
                        } else if (route.name === 'Order') {
                            iconName = 'cart-outline';
                        } else if (route.name === 'Inbox') {
                            iconName = 'mail-outline';
                        } else if (route.name === 'Profile') {
                            iconName = 'person-outline';
                        }
                        return <Icon name={iconName} size={size} color={color} />;
                    },
                    tabBarActiveTintColor: '#6200EE',
                    tabBarInactiveTintColor: 'gray',
                    headerShown: false, // Ẩn header của từng tab
                })}
            >
                <Tab.Screen name="Home" component={HomeStack} />
                <Tab.Screen name="Order" component={OrderScreen} />
                <Tab.Screen name="Inbox" component={InboxScreen} />
                <Tab.Screen name="Profile" component={ProfileScreen} />
            </Tab.Navigator>
        </NavigationContainer>
    );
};

export default App;