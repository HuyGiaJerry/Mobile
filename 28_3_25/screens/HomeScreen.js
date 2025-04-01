import React from 'react';
import { View, Text, StyleSheet, ScrollView, TextInput, Image, TouchableOpacity } from 'react-native';
import Icon from 'react-native-vector-icons/Ionicons';
import Carousel from 'react-native-snap-carousel';
import { useNavigation } from '@react-navigation/native';


const HomeScreen = () => {
    const navigation = useNavigation();
    return (
        <ScrollView style={styles.container}>
            {/* Header Section */}
            <View style={styles.header}>
                <View style={styles.headerLeft}>
                    <Image
                        source={require('../assets/avatar.png')} // Replace with your avatar image
                        style={styles.avatar}
                    />
                    <View>
                        <Text style={styles.locationText}>Your Location</Text>
                        <View style={styles.locationRow}>
                            <Icon name="location-outline" size={16} color="#6200EE" />
                            <Text style={styles.location}>Savar, Dhaka</Text>
                        </View>
                    </View>
                </View>
                <Icon name="notifications-outline" size={24} color="#6200EE" style={styles.notificationIcon} />
            </View>

            {/* Search Section */}
            <View style={styles.searchContainer}>
                <Icon name="search-outline" size={20} color="#888" style={styles.searchIcon} />
                <TextInput
                    style={styles.searchInput}
                    placeholder="Search your food"
                    placeholderTextColor="#888"
                />
                <Icon name="filter" size={24} color="#fff" style={styles.filterIcon} />
            </View>

            {/* Categories Section */}
            <View style={styles.categories}>
                <TouchableOpacity style={styles.category}>
                    <Icon name="pizza-outline" size={30} color="#6200EE" style={styles.categoryIcon} />
                    <Text style={styles.categoryText}>PIZZA</Text>
                </TouchableOpacity>
                <TouchableOpacity style={styles.category}>
                    <Icon name="fast-food-outline" size={30} color="#6200EE" style={styles.categoryIcon} />
                    <Text style={styles.categoryText}>BURGER</Text>
                </TouchableOpacity>
                <TouchableOpacity style={styles.category}>
                    <Icon name="wine-outline" size={30} color="#6200EE" style={styles.categoryIcon} />
                    <Text style={styles.categoryText}>DRINK</Text>
                </TouchableOpacity>
                <TouchableOpacity style={styles.category}>
                    <Icon name="restaurant-outline" size={30} color="#6200EE" style={styles.categoryIcon} />
                    <Text style={styles.categoryText}>RICE</Text>
                </TouchableOpacity>
            </View>

            {/* Offer Section */}
            <View style={styles.offerContainer}>
                <Carousel
                    data={[
                        { id: 1, image: require('../assets/burgerThumpnail.png') },
                        { id: 2, image: require('../assets/pizzaThumnail.jpg') },
                        { id: 3, image: require('../assets/drinkThumpnail.jpg') },
                    ]}
                    renderItem={({ item }) => {
                        if (!item || !item.image) return null;
                        return <Image source={item.image} style={styles.offerImage} />;
                    }}
                    sliderWidth={325}
                    itemWidth={325}
                    loop={true}
                    autoplay={true}
                    autoplayInterval={3000}
                />
            </View>

            {/* Popular Items Section */}
            <View style={styles.popularItems}>
                <View style={styles.popularHeader}>
                    <Text style={styles.popularTitle}>Popular Items</Text>
                    <Text style={styles.viewAll}>View All</Text>
                </View>
                <ScrollView horizontal showsHorizontalScrollIndicator={false}>
                    <TouchableOpacity
                        style={styles.popularItem}
                        onPress={() =>
                            navigation.navigate('ShoppingCart', {
                                item: {
                                    name: 'Burger',
                                    price: 28,
                                    image: require('../assets/burger.png'),
                                    rating: '4.9 (3k+ Rating)',
                                },
                            })
                        }
                    >
                        <Image
                            source={require('../assets/burger.png')}
                            style={styles.popularImage}
                        />
                        <Text style={styles.popularItemText}>Burger</Text>
                    </TouchableOpacity>
                    <TouchableOpacity
                        style={styles.popularItem}
                        onPress={() =>
                            navigation.navigate('ShoppingCart', {
                                item: {
                                    name: 'Pizza',
                                    price: 32,
                                    image: require('../assets/pizza.png'),
                                    rating: '4.8 (2k+ Rating)',
                                },
                            })
                        }
                    >
                        <Image
                            source={require('../assets/pizza.png')}
                            style={styles.popularImage}
                        />
                        <Text style={styles.popularItemText}>Pizza</Text>
                    </TouchableOpacity>
                </ScrollView>
            </View>
        </ScrollView>
    );
};

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#fff',
        padding: 16,
        marginTop: 20,
    },
    header: {
        flexDirection: 'row',
        justifyContent: 'space-between',
        alignItems: 'center',
        marginBottom: 16,
        backgroundColor: '#F8F8F8',
        padding: 16,
        borderRadius: 12,
    },
    headerLeft: {
        flexDirection: 'row',
        alignItems: 'center',
    },
    avatar: {
        width: 50,
        height: 50,
        borderRadius: 25,
        marginRight: 12,
    },
    locationText: {
        fontSize: 14,
        color: '#888',
    },
    locationRow: {
        flexDirection: 'row',
        alignItems: 'center',
    },
    location: {
        fontSize: 16,
        fontWeight: 'bold',
        color: '#6200EE',
        marginLeft: 4,
    },
    notificationIcon: {
        marginRight: 8,
    },
    searchContainer: {
        flexDirection: 'row',
        alignItems: 'center',
        backgroundColor: '#F8F8F8',
        borderRadius: 8,
        paddingHorizontal: 12,
        paddingVertical: 8,
        marginBottom: 16,
        shadowColor: '#000',
        shadowOffset: { width: 0, height: 2 },
        shadowOpacity: 0.1,
        shadowRadius: 4,
        elevation: 2,
    },
    categoryIcon: {
        marginBottom: 4,
    },
    searchInput: {
        flex: 1,
        fontSize: 16,
        color: '#000',
    },
    filterIcon: {
        backgroundColor: '#6200EE',
        padding: 8,
        borderRadius: 8,
        marginLeft: 8,
    },
    categories: {
        flexDirection: 'row',
        justifyContent: 'space-between',
        marginBottom: 16,
    },
    category: {
        alignItems: 'center',
        backgroundColor: '#F8F8F8',
        padding: 8,
        borderRadius: 8,
        width: 80,
    },
    categoryImage: {
        width: 40,
        height: 40,
        marginBottom: 4,
    },
    categoryText: {
        color: '#000',
        fontSize: 12,
    },
    offerContainer: {
        marginBottom: 16,
    },
    offerImage: {
        width: 340, // Adjust width to match `sliderWidth` and `itemWidth`
        height: 180,
        borderRadius: 12,
    },
    offerText: {
        marginTop: 8,
        fontSize: 16,
        fontWeight: 'bold',
    },
    popularItem: {
        marginRight: 16,
        marginBottom: 30,
    },
    popularItemText: {
        marginTop: 8,
        fontSize: 14,
        fontWeight: '500',
        color: '#000',
        textAlign: 'center',
    },
    popularHeader: {
        flexDirection: 'row',
        justifyContent: 'space-between',
        alignItems: 'center',
        marginBottom: 8,
    },
    popularTitle: {
        fontSize: 18,
        fontWeight: 'bold',
    },
    viewAll: {
        fontSize: 14,
        color: '#6200EE',
    },
    popularImage: {
        width: 120,
        height: 120,
        borderRadius: 8,
    },
});

export default HomeScreen;